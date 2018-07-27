#pragma once

#include "Maths/Vector3.hpp"
#include "Collider.hpp"

class btBoxShape;

namespace acid
{
	class FL_EXPORT ColliderBox :
		public Collider
	{
	private:
		btBoxShape *m_shape;
		Vector3 m_extents;
	public:
		ColliderBox(const Vector3 &extents = Vector3::ONE);

		~ColliderBox();

		void Start() override;

		void Update() override;

		void Load(LoadedValue *value) override;

		void Write(LoadedValue *destination) override;

		std::string GetName() const override { return "ColliderBox"; };

		FL_HIDDEN btCollisionShape *GetCollisionShape() const override;

		Vector3 GetExtents() const { return m_extents; }

		void SetExtents(const Vector3 &extents) { m_extents = extents; }
	};
}
